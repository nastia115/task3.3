
Відповідь Array18 
#include <iostream>
 #include <ctime> 
#include <cstdlib>
 using namespace std; 
int main() { srand(time(NULL));
 const int size = 10; int A[size];
 for(int i = 0; i < size; i++) { 
A[i] = rand() % 10 + 1; } 
for(int i = 0; i < size-1; i++) {
 if(A[i] < A[size-1]) { 
cout << A[i] << endl; 
} cout <<0 << endl; 
}
 }
 Array 20
 #include <iostream> 
#include <ctime>
 #include <cstdlib>
 using namespace std; 
int main() 
{ const int N = 10;
 int mas[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
int K = 2, L = 7;
 int sum = 0; srand(time(0));
 cout << "Array ";
 for (int i = 0; i < N; i++) {
 cout << mas[i] << " "; 
} cout << endl;
 for (int i = K - 1; i < L; i++)
 {
 sum += mas[i];
 } 
cout << "Sum of elements from " << K << " to " << L << ": " << sum << endl;
 }
 Arrey 24 
#include <iostream> 
using namespace std; 
int main() {
 int n, d; int a[100];
 cout << "Imput array size "; 
cin >> n; 
cout << "Imput array elements "; 
for (int i = 0; i < n; i++) {
 cin >> a[i];
 }
 d = a[1] - a[0];
 for (int i = 2; i < n; i++) { 
if (a[i] - a[i - 1] != d) {
 d = 0; break;
 }
 }
 if (d == 0) { 
cout << d << endl; 
}
 else { 
cout << "Progression difference: " << d << endl;
 }
 }
 Arrey 26
 #include <iostream> 
#include <ctime>
 #include <cstdlib>
 using namespace std; 
int main() 
{ 
const int N = 10;
 int arr[N];
 srand(time(NULL));
 for(int i = 0; i < N; i++) {
 arr[i] = rand() % 10;
 cout << arr[i] << " "; } cout << endl;
 int flag = arr[0] % 2;
 for(int i = 1; i < N; i++) {
 if((arr[i] % 2 == 0 && flag == 0) || (arr[i] % 2 != 0 && flag == 1))
 continue; 
else { cout << i << endl; 
break;
 }
 }
 if(arr[N-1] % 2 != flag) { 
cout << N << endl; 
}
 else {
 cout << 0 << endl; 
} 
}
 Arrey 28
 #include <iostream> 
#include <ctime> 
#include <cstdlib>
 using namespace std;
 int main() {
 const int N = 10; 
int A[N]; srand(time(0));
 for (int i = 0; i < N; i++) { A[i] = rand() % 100; 
cout << A[i] << " "; } cout << endl; 
int min_even = A[1];
 for (int i = 3; i < N; i += 2) {
 if (A[i] < min_even) { min_even = A[i];
 }
 }
 cout << "Min element " << min_even << endl;
 }
 

