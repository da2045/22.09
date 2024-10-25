//#include <iostream>
//using namespace std;
//
//int rollDice() {
//    return rand() % 6 + 1;
//}
//
//int main() {
//    int userSum = 0, player2Sum = 0;
//
//    int seed = 0;
//    for (int i = 0; i < 100; ++i) {
//        seed += i;
//    }
//    srand(seed);
//
//    for (int i = 0; i < 3; ++i) {
// 
//        int userRoll1 = rollDice();
//        int userRoll2 = rollDice();
//        int userTotal = userRoll1 + userRoll2;
//        userSum += userTotal;
//        cout << "User rolled: " << userRoll1 << " and " << userRoll2 << " (Total: " << userTotal << ")" << endl;
//
//        int player2Roll1, player2Roll2;
//        cout << "Enter roll for player 2 (two numbers): ";
//        cin >> player2Roll1 >> player2Roll2;
//        int player2Total = player2Roll1 + player2Roll2;
//        player2Sum += player2Total;
//        cout << "Player 2 rolled: " << player2Roll1 << " and " << player2Roll2 << " (Total: " << player2Total << ")" << endl;
//    }
//
//    cout << "User's total sum: " << userSum << endl;
//    cout << "Player 2's total sum: " << player2Sum << endl;
//
//    if (userSum > player2Sum) {
//        cout << "User wins!" << endl;
//    }
//    else if (userSum < player2Sum) {
//        cout << "Player 2 wins!" << endl;
//    }
//    else {
//        cout << "It's a tie!" << endl;
//    }
// 
//// 
//// 
//// 
//int generateRandomNumber(int seed) {
//    seed = (seed * 1103515245 + 12345) & 0x7fffffff;
//    return seed % 100;
//}
//
//int main() {
//    const int SIZE = 10; 
//    int arr[SIZE];
//
//   
//    int seed = 1;
//    cout << "Array: ";
//    for (int i = 0; i < SIZE; ++i) {
//        arr[i] = generateRandomNumber(seed);
//        seed = arr[i]; 
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    
//    int min = arr[0];
//    int max = arr[0];
//
//    for (int i = 1; i < SIZE; ++i) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//
//    cout << "Minimum element: " << min << endl;
//    cout << "Maximum element: " << max << endl;
//
//    return 0;
//}


//int main() {
//    const int MONTHS = 12;
//    int profit[MONTHS];
//
//    
//    cout << "Enter the profit for each month:" << endl;
//    for (int i = 0; i < MONTHS; ++i) {
//        cout << "Month " << i + 1 << ": ";
//        cin >> profit[i];
//    }
//
//    
//    int start, end;
//    cout << "Enter the range (for example, 3 and 6): ";
//    cin >> start >> end;
//
//    
//    int minProfit = profit[start - 1];
//    int maxProfit = profit[start - 1];
//    int minMonth = start;
//    int maxMonth = start;
//
//    for (int i = start; i <= end; ++i) {
//        if (profit[i - 1] < minProfit) {
//            minProfit = profit[i - 1];
//            minMonth = i;
//        }
//        if (profit[i - 1] > maxProfit) {
//            maxProfit = profit[i - 1];
//            maxMonth = i;
//        }
//    }
//
//    cout << "Minimum profit in month: " << minMonth << " with profit " << minProfit << endl;
//    cout << "Maximum profit in month: " << maxMonth << " with profit " << maxProfit << endl;
//
//    return 0;
//}
