// PROBAR SI UNA ESTRUCTURA ES PILA, COLA, O COLA DE PRIORIDAD

#include <cstdio>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int cases; scanf("%d", &cases);
    stack <int> pila;
    queue <int> cola;
    priority_queue <int> pq;
    bool pil = true, col = true, prior = true;
    while(cases--)
    {
        int order, number;
        scanf("%d %d", &order, &number);
        if(order == 1) pila.push(number), cola.push(number), pq.push(number);
        if(order == 2)
        {
            if (!pila.empty() && pila.top() != number) pil = false;
            if(!cola.empty() && cola.front() != number) col = false;
            if(!pq.empty() && pq.top() != number) prior = false;
            if(pila.empty()) pil = false;
            if(cola.empty()) col = false;
            if(pq.empty()) prior = false;
            if(!pila.empty()) pila.pop();
            if(!cola.empty()) cola.pop();
            if(!pq.empty()) pq.pop();
        }
    }
    if(!pil && !col && !prior)
        printf("Imposible\n");
    else if((pil && col) || (pil && prior) || (prior && col) || (prior && pil && col))
        printf("Ambiguo\n");
    else if(pil && !col && !prior)
        printf("Pila\n");
    else if(col && !pil && !prior)
        printf("Cola\n");
    else if(prior && !pil && !col)
        printf("Prioridad\n");

    return 0;
}
