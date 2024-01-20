#include "iostream"

//int main(){
//    int n,m,count;
//    std::cin >> n >> m;
//    count = n/m;
//    std::cout << count;
//}

//int main(){
//    int N,k,count_klubok;
//    std::cin >> N >> K;
//    count_klubok = N % k;
//    std::cout << coumt_klubok;
//}

//int main(){
//    int x, y, day = 1;
//    std::cin >> x;
//    std::cin >> y;
//
//    while (x < y) {
//        x = x + (x * 0.1);
//        day++;
//
//    }
//    std::cout << day;
//}


//int main(){
//    int n, count;
//    std::cin >> n;
//    if (n % 5 != 0 || n < 25){
//        std::cout << -1;
//
//    }else{
//        while(n % 5 ==0){
//            n /= 5;
//            count++;
//        }
//        std::cout << count;
//    }
//
//}

// 5
//int main() {
//    int N;
//    std::cin >> N;
//    int max_trio[3];
//    int current_trio[3];
//    int max_sum = 0;
//    int max_index = 0;
//    for (int i = 0; i < 3; ++i) {
//        std::cin >> max_trio[i];
//        current_trio[i] = max_trio[i];
//        max_sum += max_trio[i];
//    }
//    for (int i = 3; i < N; ++i) {
//        current_trio[0] = current_trio[1];
//        current_trio[1] = current_trio[2];
//        std::cin >> current_trio[2];
//        int current_sum = current_trio[0] + current_trio[1] + current_trio[2];
//        if (current_sum > max_sum) {
//            for (int j = 0; j < 3; ++j) {
//                max_trio[j] = current_trio[j];
//            }
//            max_sum = current_sum;
//            max_index = i - 2;
//        }
//    }
//    std::cout << max_index << " " << max_index + 1 << " " << max_index + 2 << " ";
//    std::cout << max_sum;
//
//}


//int main(){
//    int n;
//    std::cin >> n;
//    int min_duo[2];
//    int current_duo[2];
//    int sum_min = 0;
//    int current_sum;
//    int min_index = 0;
//    for (int i = 0; i < 2; i++){
//        std::cin >> min_duo[i];
//        current_duo[i] = min_duo[i];
//        sum_min += min_duo[i];
//    }
//    for (int i = 2; i < n; i++){
//        current_duo[0] = current_duo[1];
//        std::cin >> current_duo[1];
//
//        current_sum = current_duo[0] + current_duo[1];
//        if(current_sum < sum_min){
//            for (int j = 0; j < 2; j++){
//                min_duo[j] = current_duo[j];
//            }
//            sum_min = current_sum;
//            min_index = i - 1;
//        }
//    }
//    std::cout << min_index <<" "<< min_index + 1 << " ";
//    std::cout << sum_min;
//
//}
