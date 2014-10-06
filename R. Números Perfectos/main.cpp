#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

long long _sieve_size;
vector <int> primes;
bitset <10000010> bs;

void sieve(long long upperbound)
{
    _sieve_size = upperbound+1;
    bs.set();
    bs[0] = bs[1] = 0;
    for(long long i =2; i <= _sieve_size; i++){
        if(bs[i])
            for(long long j = i * i; j <= _sieve_size; j += i)
                bs[j] =0;

            primes.push_back((int) i);
    }
}

long long sumDiv(long long N)
{
    long long PF_idx = 0, PF = primes[PF_idx], ans = 1;
    while(PF *PF <= N)
    {
        long long power = 0;
        while(N%PF == 0){
            N /= PF;
            power++;
        }
        ans *= ((long long)pow((double)PF, power + 1.0) - 1) / (PF-1);
        PF = primes[++PF_idx];
    }
    if(N != 1) ans *=((long long)pow((double)N, 2.0)-1) / (N-1);

    return ans;
}

int main()
{
    sieve(10000000);
    int cases; fscanf(stdin, "%d", &cases);

    while(cases--)
    {
        long long num; cin >> num;
        bool first = true;
        for(long long i = 1; i <= num; i++)
        {
            if(i%2 == 0)
            {
                long long sum = sumDiv(i);

                if(sum == i && first){
                    cout << sum;
                    first = false;
                }
                else if(sum == i && !first)
                   cout << " " << sum;
            }
        }
        fprintf(stdout, "\n");
    }
    return 0;
}
