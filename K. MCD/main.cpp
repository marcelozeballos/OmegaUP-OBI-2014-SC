//MCD CODIGO
// CUANTOS CAMBIOS TOMA CAMBIAR UN ARRAY ENTERO A 1s
#include <cstdio>
#include <cassert>
#include <cstring>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while ( b > 0 )
		c = a%b, a = b, b = c;
	return a;
}

bool isPrime(int x)
{
	if ( x <= 1 ) return false;
	if ( x == 2 ) return true;
	if ( x%2 == 0 ) return false;
	int lim = floor(sqrt(x));
	for(int i = 3; i <= lim; i += 2)
		if ( x%i == 0 ) return false;
	return true;
}

bool isMultiple[1001][1001];

int main()
{
	// Precalculo de primos
	vector<int> primes;
	for(int i = 1; i <= 1000; i++)
		if ( isPrime(i) )
			primes.push_back(i);
	// Tabla de multiplos
	memset(isMultiple, 0, sizeof isMultiple);
	for(int i = 1; i <= 1000; i++)
		for(int j = 1; i*j <= 1000; j++)
			isMultiple[i*j][i] = true;

	int n;
	vector<int> vec;
	while ( scanf("%d", &n) != EOF )
	{
		// Entrada de datos
		vec.resize(n);
		for(int i = 0; i < n; i++)
			scanf("%d", &vec[i]);

		// Van a converger todos?
		int disc = vec[0];
		for(int i = 1; i < n; i++)
			disc = gcd(disc, vec[i]);
		if ( disc > 1 )
		{
			puts("-1");
			continue;
		}

		// Tiempo de convergencia
		int ans = 0;
		for(int k = 0; k < (int)primes.size(); k++)
		{
			const int x = primes[k];
			int i = 0, rin = n, tam = 0;
			// Caso especial si empezamos en un multiplo
			if ( isMultiple[vec[i]][x] )
			{
				++i, ++tam;
				for(int j = n-1; j >= i && isMultiple[vec[j]][x]; --j)
					--rin, ++tam;
			}
			// Recorrido hacia la derecha
			for(; i < rin; ++i)
			{
				if ( isMultiple[vec[i]][x] )
					++tam;
				else
				{
					ans = max(ans, tam);
					tam = 0;
				}
			}
			// Actualizacion
			ans = max(ans, tam);
		}

		// Salida / respuesta
		printf("%d\n", ans);
	}
    return 0;
}
