/*
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1031
 * Problema: 1031.
 * Programa: Crise de energia na Nova Zel�ndia.
 * Autor desta resolu��o: Daniel Attias.
 * Data: 19/08/2019.
 */

#include <bits/stdc++.h>
/*
(Auckland seria a regi�o n�mero 1 
e Wellington a n�mero 13
*/
using namespace std;

int main(void) {
	int N;
	int m;
	
  
	cin >> N;
	
  cout << "N = " << N << endl;
  
  if (N != 0)
		m = rand() % N;
	
  cout << "m = " << m << endl;
  
	while(N != 0)
	{
		cin >> N;
	}
//	cout << RAND_MAX << endl;
//	cout << (rand()%10) << endl;
//	cout << (rand()%10) << endl;
//	cout << (rand()%10) << endl;
	return 0;
}
