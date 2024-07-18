#define MAX 10e09

ll dp[10000000];

// dp es un array de sub soluciones, se hace para no volver a calcular el
// resultado asi se puede obtimizar el prgoramar

ll fact(ll a) {
  if (a == 1 || a == 0) {
    return 1;
  } else {
    if (dp[a] != 0) { // si el valor en memopria no es 0 entonces significa que
                      // ya fue calculado anteriormente
      return dp[a];
    } else {
      return dp[a] = (a * fact(a - 1)); // de  caso contrario asignar el valor
                                        // al dp con una funcion recursiva
    }
  }
}

// memset, don't forget memset, cuz its a dp array, so u need to pre-fill with 0

ll ceros(ll n) { // en esta funcion se cuent los 0
  ll cnt = 0;
  while (n > 0) {
    cnt += (n / 5); // es entre 5 pq cada 5 es para un count de 0
    n /= 5;
  }
  return cnt;
}
