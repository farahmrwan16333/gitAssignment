#include "iostream"
#include "vector"

int getSum(std::vector<int> numbers){
    int sum=0;
    for(int i=0;i<numbers.size();i++){
        sum+=numbers[i];
    }
    return sum;
}
float getAverage (std::vector <int> numbers)
{
return ((float)getSum(numbers) / numbers.size());}

int main(){
    std::vector<int> numbers={1,2,3,4,5,6,7,8,9,10};
    std::cout<<"Sum is "<<getSum(numbers)<<"\n";
	std::cout<<"Average is "<<getAverage(numbers)<<"\n";
}


