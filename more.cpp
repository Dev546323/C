#include<iostream> //https://en.cppreference.com/w/cpp/header/cctype  

#include<iomanip> //https://en.cppreference.com/w/cpp/io/manip
#include<ios>

#include<limits> //let's you see the max and min limits of diff data types
#include<climits> //lets you use the max and min limits of diff data types. 
//https://en.cppreference.com/w/cpp/types/numeric_limits

#include<cmath> //https://en.cppreference.com/w/cpp/header/cmath
#include<cstring> //https://en.cppreference.com/w/cpp/header/cstring
#include<string> //https://en.cppreference.com/w/cpp/string/basic_string

#define PI 3.14 /*this is a preprocessor directive, it replaces all instances of PI with 3.14 
 definition can only show up once in the program.*/

using namespace std; //to avoid using std:: with every line

    inline/*inline makes the compiler change all the function call to the function itself*/ void end(){ 
    //compiler can ignore inline if it wants to. and use call as call. 
    cout<<endl<<endl;
}

int main(){
cout<< setprecision(10); //set the limit of digits after decimal point
//has to be used with cout. or cin 

    //int 
    signed int x; //acts as normal int
    short int i; //takes 2 bytes
    std::cout<<sizeof(i)<<std::endl;
    long int j; //takes 4 or 8 bytes
    std::cout<<sizeof(j)<<std::endl;
    long long int jj; //takes 8 bytes    
    std::cout<<sizeof(jj)<<std::endl;
    unsigned int y; //cannot take negative integers, but normal for positive integers
    //long and short can only take int, no float or char or anything else. 
   
        //float
        float a; //takes 4 bytes (7 decimals)
        a=1.346846l;
        std::cout<<a/0<<std::endl; //float speciality
        double b; //takes 8 bytes (15 decimals)
        b=0.0;
        std::cout<<b/0.0<<std::endl;
        long double c; //takes 16 bytes (more than 15 decimals)
        c=1.3468463795l;
        std::cout<<c/a<<std::endl; //float speciality
        cout<<sizeof(c);
        end();
        
    cout<<boolalpha; //bool alpha turn the output from 0/1 to true/false for everything below
    bool flag=false;
    //bool is the boolean operator it can either be true(1) or false(0)
    cout<<flag<<endl;
    cout<<flag;
    end();

    auto u=12.25f; //auto automatically assigns the data type(double, int, char) to the variable
    //auto requires instant initialization. can't use auto with cin
    //we can use int suffixes for this u (unsigned), l (long), ll (long long), f (float), d (double), ld (long double)
    //auto can be used with pointers, but not with arrays.

    cout <<noboolalpha;
    cout<<(a<u)<<endl;//<< has higher precedence than <
    cout<<(a==u);
    end();

    //cout<<showbase; //showbase shows the base of the number
    //adds 0 prefix for octal, 0x for hex   

        int var=12345;
        int* pointer6 = &var;
        pointer6= new int{var};
        auto var2=-12345;
        auto var3=123.456;
    
  
    
            cout<<var<<endl;
            cout<<oct<<var<<endl; //octal
            cout<<hex<<var<<endl; //hexadecimal
            cout<<var2<<endl;
            cout<<oct<<var2<<endl; //octal
            cout<<hex<<var2<<endl; //hexadecimal
            cout<<var3<<endl;
            cout<<oct<<var3<<endl; //octal
            cout<<hex<<var3; //hexadecimal
            end();


    cout<<dec;
    cout<<numeric_limits<int>::max()<<endl; //the maximum value of a particular data type
    cout<<numeric_limits<size_t>::max()<<endl;
    cout<<numeric_limits<int>::min()<<endl; //the minimum value of a particular data type
    cout<<numeric_limits<int>::lowest()<<endl;
    cout<<numeric_limits<int>::digits;// the number of binary digits(bits) used to store the value. 
    end();


            double var4=123.6;
            double var5=-123.5;
            cout<<floor(var4)<<endl; //rounds down
            cout<<ceil(var4)<<endl; //rounds up
            cout<<round(var5)<<endl; //rounds to the nearest integer
            cout<<trunc(var5)<<endl; //removes the decimal part
            cout<<abs(var5)<<endl; //absolute value
            cout<<round(exp(10))<<endl; //e^10
            cout<<round(pow(var4,2))<<endl; //var4^2
            cout<<round(sqrt(var4))<<endl; //square root
            cout<<round(cbrt(var4)); //cube root
    end();


const int VAR7=10; //const makes the variable constant, it can't be changed
    //var7=20; //this will give an error

    //loops

    //use size_t instead of int in loops. 
    //size_t only takes positive integers
    for(size_t var6=0;var6<VAR7;var6++ ){
        cout;
    }
    while((int)a<VAR7){ //test if the condition is true before executing the loop
        cout;
        a++; //increment the value 
    }

    do{ //execute the loop first and then test the condition
        cout;
        a--; //decrement 
    }while((int)a>0); //condition test
    end();
    int var8=0;


            //array

            int array[]={4,9,7,6,9,5,23,8,6,1,32,8,5,6,7,5,6,3,8,21,6,2,8,2,9};
            //0-> n-1 index. 
            for (int i=0;i<(sizeof(array)/4);i++){ // i is the index number
                //with this iteration the index number controls the array flow
                cout <<array[i]<<" ";
            }
            cout<<endl;

            for(int element:array){
                //considered free range, the "element" variable takes the value of the particular element in the array until the array finishes 
                var8+=element;
                cout<<setw(5)<<var8;
            }
            //we can also make constant arrays
            const int constant[]={1,2,3,4,5};
            //constant[0]=2; //this will give an error
            int sum =0;
            for (int element: constant){ 
                sum+=element;
            }
            cout<<endl<<sum;
            end();

            char array2[]={'a','b','c','d','e','f','g','h','i','j','\0'};//too avoid garbage values post the array size we should end the array with a null character

            char array3[]={"kill me"}; // "space" is also a character
            array3[1]='i';
            cout<<array3<<endl; 
            cout<<setw(2)<<array2<<endl;//this only works for character arrays 
            for(auto a:array2){
                cout<<a<<" ";
                cout<<int(a)<<" ";  //since the ascii value of \0 is 0 the final output is 0
            }
            end();

    //POINTERS
    //Pointers have the ability to cause real issues with your device not just the program. 
    //BAD THINGS can happen if we use uninitialized pointers
    //always initialize ptr while declaration or put it to nullptr
    //DON'T try to save data directly to a pointer, it won't work, pointers can only store data in other variables. "actually not store but more of point to."



    double *pointer= &var5; //pointer is a variable that stores the address of another variable
    cout<<pointer<<endl; //address of the variable
    cout<<*pointer<<endl; //value of the variable
    cout<<&pointer<<endl; //address of the pointer
    cout<<sizeof(pointer)<<endl; //all pointers have the same size. 
    cout<<sizeof(*pointer)<<endl; //size of the variable
    int* pointer2=&var8; //pointer to an integer
    cout<<sizeof(pointer2)<<endl;
    int *pointer3{nullptr}, *pointer4{nullptr}; //to declare multiple pointers in 1 statement we need to add * to each variable. 
    char character ='3';
    char* characterpointer=&character; //pointer to a character
    char *characterpointer2 = "character array which can act as a string";//can use character pointers to store entire strings. 
    //the saved string is not a string but rather a character array 
    //cannot make any changes in the elements of the character array. 
    char *characterpointer3 = array2; //this is a pointer to the first element of the array
    array2[0]='a';
    cout<<characterpointer3<<endl;

    cout<<*characterpointer2<<endl;//proof that it is a array
    end();


            /*
            VRTUAL MEMORY
            ALL PROGRAMS THINK THEY HAVE ALL THE MEMORY TO THEMSELVES DUE TO VIRTUAL MEMORY 
            VMEM IS CONTROLLED BY THE OS
            THE RANGE FOR VMEM IS (0-2^N)-1 where n is the bits in the system. 

            the STACK portion of VMEM stores the local variables. 
            lifetime controlled by program

            the HEAP portion of VMEM stores the global variables.
            HEAP is the additional memory qeued for stack. 
            Lifetime controlled by dev
            */
           //Program crash while using DMA is also quite bad. 


            pointer = new double; /*
            this allocates memory for the pointer in the heap
            his is DMA and this location in memory now belongs to the program and cannot be used by anything else until we release it. 
            the size is dependant on the type of pointer.
            */
           
            cout<<*pointer<<endl;// this currently hold the nullptr becuse it has been given a new memory address without any initialization, this new address is auto initialized to 0. 
            //but since we're using DMA, we can consider it as a global variable after initialization. 
            delete pointer; /*
            this releases the memory allocated to the pointer
            the pointer currently holds the same address because it requires initilization 
            the value inside no longer exists because that memory no location no longer belongs to the program and is used by some other process
            */
          pointer = nullptr; //this is a good practice 

          int* pointer5 = new int;
          *pointer5 = var5; //The ONLY way to save a variable using DMA.
            delete pointer5;
            pointer5 = nullptr; 

            pointer = new double; //We can reuse the same variable for a different DMA after using the delete function.
            *pointer = var5; 
          
            delete pointer;//DON'T try to delete pointer twice, it will crash the program 
            pointer = nullptr;

            /*Dangling pointers, BAD.
            1. uninitialized pointers
            just initialize all pointers to be safe.

            2. deleted pointers 
            that is why we should always set the pointer to nullptr after deleting it.

            3. multiple pointers pointing to the same memory. 
            if we delete one pointer, the other pointer will point to a memory location that no longer belongs to the program.
            TO fix this simply don't have pointers pointing to deleted pointers
            */
            
            //NULL PTR CHECK
            if(pointer){ //pointers acts as booleans. 
                cout<<"checking"<<endl;
            }
            else {
                cout<<"pointer is null"<<endl;
            }
            if((pointer==nullptr)){
                cout<<"checking"<<endl;
            }
            else {
                cout<<"pointer is null"<<endl;
            }
            if(!(pointer==nullptr)){ //! INVERTS THE RESULT. 
                cout<<"checking"<<endl;
            }
            else {
                cout<<"pointer is null"<<endl;
            }
            end();

           pointer5 = new(nothrow/*used in case new fails mem allocation*/) int[5]; //array exists in heap
          pointer5[2]=45;
            pointer5[3]=50;
            pointer5[4]=55;
            pointer5[0]=60;
            pointer5[1]=65;
            //for(int i:pointer) //doesn't work because pointer6 holds mem addy for first element of the array 
            for(size_t i=0;i<5;i++){ 
                  cout<<&pointer5<<" "<<pointer5[i]<<" ";
            }
            delete pointer5; //delete the entire array
            pointer5 = nullptr; 
            end();

    //Reference is a secondary name for a particular variable 
    int& reference = *pointer6;//declaration and initialization in same line. 
    cout<<reference<<endl;
    cout<<&reference<<endl;
    cout<<&var<<endl;
    cout<<var<<endl;
    cout<<&pointer6<<endl;
    cout<<&*pointer6<<endl;

    double& reference2 = var3; 
    cout<<reference2<<endl;
    cout<<&reference2<<endl;
    cout<<&var3<<endl;
    
    //ARRAY REFERENCE. 
    char (&reference3)[11]=array2;
    for(auto a:reference3){
        cout<<a<<" ";
    }
   
    const int &ref4= VAR7;//constant reference 
    const int *const pointer7 = &VAR7; //constant pointer to a constant variable
    const int* pointer8 = &var; /*const pointer to normal variable 
    lowkey turns it into a reference i.e the pointer can no longer point to any other variable other than the one initialized.
    */
    delete pointer6;
    pointer6 = nullptr; 


            //CHECK https://en.cppreference.com/w/cpp/header/cctype
            // all the IS functions return a boolean value. 
            char characterinput;
            cout<<"Enter a character: ";
            characterinput ='\0';
            //cin>>characterinput;
            if(isalpha(characterinput)){ //checks if the character is alphabetic
                cout<<"The character is alphabetic"<<endl;
                if (isupper(characterinput)){ //checks if the character is uppercase
                    cout<<"The character is uppercase"<<endl;
                    cout<<"The character can be converted to lowercase: "<<char(tolower(characterinput))<<endl;
                    
                }
                else if (islower(characterinput)){ //checks if the character is lowercase
                    cout<<"The character is lowercase"<<endl<<"And can be converted to uppercase like: "<<char(toupper(characterinput))<<endl;
                }
            }
            else if(isdigit(characterinput)){ //checks if the character is numeric
                cout<<"The character is numeric"<<endl;
            }
            else if (ispunct(characterinput)){ //checks if the character is punctuation
                cout<<"The character is punctuation"<<endl;
            }
             if(isalnum(characterinput)){ //checks if the character is alphanumeric
                cout<<"The character is alphanumeric"<<endl;
            }
            end();

            
            int alpha=0, lower=0,digit=0,upper=0,space=0,total=0;
            char a_alpha[60],a_digit[60],a_upper[30],a_lower[30],a_space[15],a_total[130];
            char array4[]={"T7h0i0S1 I4s A8 6T9e0s4T m8E9S1a8G3e5 T3o c2H2e1k7C0K0 t0H1e6 C1a1p1A6b8I1L0i1t8i3E8S9 o9F t7h9E4 I7s4 7F7u2n1C5t1I9O9n0 "};
            for(auto a:array4){
                if(isalpha(a)){
                    a_alpha[alpha]=a;
                    alpha++;
                    
                        if(islower(a)){
                            a_lower[lower]=a;
                            lower++;
                        }
                        else if(isupper(a)){
                            a_upper[upper]=a;
                            upper++;
                        }
                     }
                 if(isdigit(a)){
                    a_digit[digit]=a;
                    digit++;
                

                }
                if(isspace(a)){
                    space++;
                    
                }
                 if(isalnum(a)){
                    a_total[total]=a;
                    total++;
                }

            }
            cout<<endl<<"The Test message provided is: ";
                for (auto a=0;a<total;a++){
                    cout<<a_total[a];
                }
                end(); 
            cout<<"The total alphabets in the message is: ";
            
                for (auto a=0;a<alpha;a++){
                    cout<<a_alpha[a];
                }
                end(); 
            cout<<endl<<"The total digits in the message is: ";
        
                for (auto a=0;a<digit;a++){
                    cout<<a_digit[a];
                }
                end(); 
            cout<<endl<<"The total uppercase characters in the message is: ";
            
                for (auto a=0;a<upper;a++){
                    cout<<a_upper[a];
                }
                end(); 
            cout<<endl<<"The total lowercase characters in the message is: ";
        
                for (auto a=0;a<lower;a++){
                    cout<<a_lower[a];
                }
                end(); 
            cout<<endl<<"The total spaces in the message is: "<<space;
            end();
            cout<<"The total alphanumeric characters in the message is: "<<total;
            end(); 
            cout<<"Number of alphabets is: "<<alpha;
            end();
            cout<<"Number of digits is: "<<digit;
            end();
            cout<<"Number of uppercase characters is: "<<upper;
            end();
            cout<<"Number of lowercase characters is: "<<lower;
            end();   

    
    
    //CSTRING FUNCTIONS. 
     //STR FUNCTIONS do not work on string but rather char/const char arrays.
     //strcmp ONLY work on const char arrays. 


    characterpointer=nullptr;
    characterpointer = array4;
    cout<<sizeof(characterpointer)<<endl;  //doesn't work as the array has decayed into a pointer
    cout<<sizeof(array4)<<endl; // includes the null pointer added by the compiler at the end of the array.
    cout<<strlen(array4)<<endl; // length of the array
    cout<<strlen(characterpointer)<<endl; // length of the array even if the array is decayed into a pointer. 
    
    const char* constpointer = "Devansh"; //STRCMP Stops working after it reaches a different character in the array  
    const char* constpointer2 = "devansh";
    cout<<strcmp(constpointer,constpointer2)<<endl; 
    cout<<((int)'D')-((int)'d')<<endl; //This is how STRCMP works. 
    const char* constpointer3 = "Devansh";
    const char* constpointer4 = "Devansh";
    cout<<strcmp(constpointer3,constpointer4)<<endl; 
    cout<<strncmp(constpointer3,constpointer4,5)<<endl; //STRNCMP is used to compare only the first n characters of the string.

    constpointer2 = nullptr;
    constpointer2= array4;
    int check=0;

    while ((constpointer2= strchr(constpointer2,'E'))!=nullptr){ //STRCHR is used to find the first occurrence of a character in the string. 
        cout<<*constpointer2<<" is at character position: "<<(constpointer2-array4)<<endl;//strrchr for the last occurence
        constpointer2++;
        
        ++check;
    }
    cout<<"Total number of time t show up in the array is: "<<check<<endl;

    for(int i=0;i<strlen(array4);i++){ //both loops are practically the same. 
        if(array4[i]=='E'){
            cout<<array4[i]<<" is at character position: "<<i<<endl;
        }
    }
    end();

                //STRINGS. 
                string kill={"i wanna kill myself"};
                string dont = {kill,5};//from 5th index
                string trys= {kill,5,12};//from index 5 to 12
                string another {"Iwannakillmyself",5};//0-5 index
                string another2 {"Iwannakillmyself",5,6 };//5 to +6
                string empty;
                cout<<boolalpha; 

                cout<<kill<<endl;
                cout<<dont<<endl;
                cout<<trys<<endl;
                
                cout<<kill.length()<<endl; //length of the string
                cout<<kill.size()<<endl; //size of the string
                cout<<kill.capacity()<<endl; //capacity of the string
                cout<<kill.max_size()<<endl; //maximum size of the string
                cout<<empty.empty()<<endl; //checks if the string is empty
                cout<<kill.at(5)<<endl; //returns the character at the given index
                cout<<another<<endl; 
                cout<<another2<<endl;
                kill= "Strings are capable of being changed at run time, regardless of the size before or after and the logic is taken care of by the compiler. ";
                cout<<kill<<endl;
                end();
    
    var8=0;
  
   
    


            
 return 0;
}

