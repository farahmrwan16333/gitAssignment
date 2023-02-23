#include "iostream"
#include "vector"

int getSum(std::vector<int> numbers){
    int sum=0;
    for(int i=0;i<numbers.size();i++){
        sum+=numbers[i];
    }
    return sum;
}

int main(){
    std::vector<int> numbers={1,2,3,4,5,6,7,8,9,10};
    std::cout<<getSum(numbers);
}