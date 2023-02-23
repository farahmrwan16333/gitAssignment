#include "iostream"
#include "vector"

int getSum(std::vector<int> numbers){
    int sum=0;
    for(int i=0;i<numbers.size();i++){
        sum+=numbers[i];
    }
    return sum;
}
int getMin (std::vector <int> numbers){
int min=numbers[0];
for ( int i=1 ; i<numbers.size(); i++)
{
	if (numbers[i] < min) {min = numbers[i];}
}
return min;
}

int main(){
    std::vector<int> numbers={1,2,3,4,5,6,7,8,9,10};
    std::cout<<"Sum is "<<getSum(numbers)<<"\n";
	std::cout<<"Minimum is "<<getMin(numbers)<<"\n";
}


