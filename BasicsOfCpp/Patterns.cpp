//<----------------------------------------------PATTERNS--------------------------------------------------------->
#include<iostream>
using namespace std;

// Pattern 1 is ->
// ****
// ****
// ****
// ****

int main(){
    int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << "*";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}


// Pattren 2 is ->
// 1111
// 2222
// 3333
// 4444

int main(){
    int n;
    cout << "Enter a No. ";
    cin >> n;
    int i = 1;
    
    while(i <= n){
        int j = 1;
        while(j<=n){
            cout << i;
            j = j+1;

        }
        cout << endl;
        i = i+1;
    }
}


// Pattern 3 is ->
// 1234
// 1234
// 1234
// 1234

int main(){
    int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


// Pattern 4 is ->
// 4321
// 4321
// 4321
// 4321

int main(){
    int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << n - j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


// Pattern 5 is ->
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16 

int main (){
    int n;
    cin >> n;

    int i = 1;
    int count = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
} 


// Pattern 6 is ->
// * 
// * * 
// * * * 
// * * * * 

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << "*" << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}


// Pattern 7 is ->
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 

int main(){
    int n;
    cin >> n;

    int row = 1;

    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << row << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}


// Pattern 8 is ->
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

int main(){
    int n;
    cin >> n;

    int row = 1;
    int count = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}


// Pattern 9 is ->
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        int value = row;
        while(col <= row){
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}


// Pattern 10 is ->
// 4
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << row-col+1 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}


// Pattern 11 is ->
// A A A A 
// B B B B 
// C C C C 
// D D D D 

int main(){
    int n;
    cin >> n;

    int row = 1;

    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A'+row-1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}


// Pattern 12 is ->
// ABCD
// ABCD
// ABCD
// ABCD

int main(){
    int n;
    cin >> n;

    int row = 1;

    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = ('A'+col-1);
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}


// Pattern 13 is ->
// A B C D 
// E F G H 
// I J K L 
// M N O P 

int main(){
    int n;
    cin >> n;

    int i = 1;
    char start = 'A';
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << start << " ";
            start = start + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}


// Pattern 14 is ->
// A B C D 
// B C D E 
// C D E F 
// D E F G 

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            char ch = ('A'+i+j-2);
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


// Pattren 15 is ->
// A 
// B B 
// C C C 
// D D D D 

int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = 1;
        while(j <= i){
            char ch = ('A' + i - 1);
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


// Pattren 16 is ->
// A 
// B C 
// D E F 
// G H I J 

int main(){
    int n;
    cin >> n;

    int i = 1;
    char ch = 'A';
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;

        }
        cout << endl;
        i = i + 1;
    }
}

// Pattren 17 is ->
// A 
// B C 
// C D E 
// D E F G 

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = ('A' + i + j -2);
            cout << ch << " ";
            j = j + 1;

        }
        cout << endl;
        i = i + 1;
    }
}


// Pattern 18 is ->
// D 
// C D 
// B C D 
// A B C D 

int main(){
    int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        int j = 1;
        char ch = 'A' + n - i;
        while(j <= i){
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;

        }
        cout << endl;
        i = i + 1;
    }
}


// Pattern 19 is ->
//    *
//   **
//  ***
// ****

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int space = 1;
        while(space <= n - i){
            cout << " ";
            space = space + 1;
        }

        int j = 1;
        while(j <= i ){
            cout << "*";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}


// Pattern 20 is ->
// * * * * 
// * * * 
// * * 
// * 

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n-i+1){
            cout << "* ";
            j = j + 1;

        }
        cout << endl;
        i = i + 1;
    }
}


// Pattern 21 is -> 
// ****
//  ***
//   **
//    *
//    * 

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1, space = 1;
        while(space < i){
            cout << " ";
            space = space + 1;
        }
        while(j <= n-i+1){
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


// Pattern 22 is ->
// 1111
//  222
//   33
//    4

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1, space = 1;
        while(space < i){
            cout << " ";
            space = space + 1;
        }
        while(j <= n-i+1){
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}



// Pattern 23 is ->
//    1
//   22
//  333
// 4444

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1, space = 1;
        while(space <= n-i){
            cout << " ";
            space = space + 1;

        }
        while(j <= i){
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}



// Pattern 24 is ->
// 1234
//  234
//   34
//    4

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = i, space = 1;
        while(space < i){
            cout << " ";
            space = space + 1;
        }
        while(j <= n){
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


// Pattern 25 is ->
//    1
//   23
//  456
// 78910

int main(){
    int n;
    cin >> n;

    int i = 1;
    int count = 1;
    while(i <= n){
        int space = 1;
        while(space <= n-i){
            cout << " ";
            space = space + 1;
        }
        int j = 1;
        while(j <= i){
            cout << count;
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}



// Pattern 26 is ->
//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int space = 1;
        while(space <= n-i){
            cout << "  ";
            space = space + 1;
        }
        int j = 1;
        while(j <= i){
            cout << j << " ";
            j = j + 1;
        }
        j = i - 1;
        while(j >= 1){
            cout << j << " ";
            j = j - 1;
        }
        cout << endl;
        i = i + 1;
    }
}


// Pattern 27 is ->
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 

int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n-i+1){
            cout << j << " ";
            j = j + 1;
        }
        j = 1;
        while(j <= (i-1)*2){
            cout << "* ";
            j = j + 1;
        }
        j = n - i + 1;
        while(j >= 1){
            cout << j << " ";
            j = j - 1;
        }
        i = i + 1;
        cout << endl;
    }
}


// Pattren 28 is -> 
// *
// * *       
// *   *     
// *     *   
// * * * * * 

int main() {
    int n;
    cin >> n;

    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            if (i == n - 1 || j == 0 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}


// Pattern 29 is ->
// A 
// A B A 
// A B C B A 
// A B C D C B A 
// A B C D E D C B A 


int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << char('A' + j - 1) << ' ';
            j++;
        }
        int k = i - 1;
        while (k > 0) {
            cout << char('A' + k - 1) << ' ';
            k--;
        }
        cout << endl;
        i++;
    }
    return 0;
}


// Pattern 30 is ->
//    1
//   2*2
//  3*3*3
// 4*4*4*4
//  3*3*3
//   2*2
//    1

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            if (j > 0) cout << "*";
            cout << i;
        }
        cout<<endl;
    }

    for (int i = n - 1; i >= 1; --i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            if (j > 0) cout << "*";
            cout << i;
        }
        cout<<endl;
    }

    return 0;
}
