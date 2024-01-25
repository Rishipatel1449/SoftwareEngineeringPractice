int main() {
    int n, i, mod, divi;

    printf("Enter the number "); 
    scanf("%d", &n);
    
    while(n != 0){
        mod = n % 10; //gives me the last digit
        if(i < mod){
            i = mod;
        }
        n/=10; // gets rid of the last digit
    }
    printf("The max number is %d",i ); 
}
