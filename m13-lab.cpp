// Program    : m13-lab.cpp
// Author     : Jade Fox
// Due Date   : April 30, 2023
// Description: Design a function ackermann(m, n), which solves Ackermann's
//              function using the following logic:
//              if m = 0 then return n + 1
//              if n = 0 then return ackermann(m - 1, 1)
//              Otherwise, return ackermann(m - 1, ackermann(m, n - 1))
// Begin pseudocode
/*
Function ackermann(Integer m, Integer n)
    If m == 0 Then
        Return n + 1
    Else If n == 0
        Return ackermann(m - 1, 1)
    Else
        Return ackermann(m - 1, ackermann(m, n - 1))
    End If
End Function

Module main()
    Declare Integer result
    Set result = Call ackermann(1, 2)
    Display result
End Module
*/
// End pseudocode

#include <iostream>

using std::cout;

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int result;
    result = ackermann(1, 2);
    cout << result << '\n';
    return 0;
}
