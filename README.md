BASIC IDEA OF OOPS: 

Earlier if we are thinking of storing the data of 100 students, at that time we all have is the Primitive data type which is given to us to use by the language which is also
called the built-in data type for 100 students we have to write all such variables 100 different time in a repetitive manner
IF thicking about the function, it is also not helpful because it only gets m/y one time in exection stack and after that using the same reference point we use the function
BUT,
   classes(user defined data type OR anything that does not exists in real and not even taking up any space so it is a just a buleprint for the object) is something that have the power to define the many reference of the space(class attributes and behaviour) as many as we want and using the 
   object(variable name of user defined data type OR entity that has a state and take up space and behaviour OR anything that exists in physical world) we can use the properties of the class so like the particular language provided us the way to use the data type and variable name we can also us the
   user defined data type(class) and use them using the variable(object) but only difference in this is that this data type will behave according to the way in which the user
   wants to make it behave.

   In class by default all are private which means from outside that class we can not access those class properties from outside the class, but those can be used within that class but from outside the class it is restricted to us.
                                                        If I wanted to use the private attributes(in built variables which are made in a class) i can make function(methods/behaviour) which are of public type and using these function i can set and get the value and that's why these functions are called setters and getters and these function are not just to set and get something , these allowed us to make validation on setting something and can also write conditions which only on fullfilling will give us the data so here we can protect our attributes and behaviours(methods/functions).
                                                     Question.)  WHY EMPTY CLASS HAS A SIZE OF 1 BYTE?
                                                     Answer.) =>  Why not 0? :- Because every object in C++ must have a unique address in memory.If the size were 0, then both objects would occupy no space, so they could end up having the same address, which is not allowed. C++ guarantees that different objects have different memory addresses. So the compiler gives the class a minimum size of 1 byte.
                                                      => EASY VISUALISATION
            Think of memory like boxes :- Even if the class has no data, the compiler still gives each object one tiny box so it can exist uniquely in memory.
                                                      =>  IMPORTANT POINT
                                                  The 1 byte is not for storing data (there is no data.
                                                 It is only to ensure:
                                                                     unique object identity
                                                                     unique address for each object
                                            => Extra Concept (INTERVIEW POINT)
                                            When inheritance is involved, compilers may use an optimization called: EMPTY BASE OPTIMIZATION
                                            where an empty base class may not consume extra space inside a derived class.
                                             Example:
                                             class Empty {};  
                                             class B : public Empty {
                                                 int x;
                                             };
                                               sizeof(B) can still be 4 (or system dependent), not 5, because of this optimization.
                        => SIZE OF CLASS :- see this topic from the video(lecture1) there is taught in a vey simple way, writing so much stuff, here can create confusion and must discuss in INTERVIEW about the sequence of alignment of attributes in a class which can effect the memory , so a great way is to move in a descending order firstly of a larger size data type then lesser data type, this helps OS to read data from m/y in a efficient way that is why we compromises with the extra space in padding, so there is a concept of padding and alignment.
|
  in making dynamic object we access data members/methods using the -> , but on creating the static object we use (.) dot operator
|
                        now the next part is the constructor : it's a function that is automatically invoked at the time of object creation 
                                                               same name as the class name
                                                               No return type
                                                               used for initialization of values
                                                   IMP use : jo resources mujhe chahiye unko constructor ke through phle hi maang loon
                                                                  jaise ki file open kraate hai user se phle agar user wo nhi krega tbtk hmm age execution krenge hi nhi aise hi real world me agr phle hi mujhe pta ho ke kya resoucres use honge to iss se time and cost dono save honge
                                                               |
                                                               ye automatically bn jata hai at the time of class creation bss dikhta nhi hai aise constructor ko hmm default constructor kahte hai and hmm apne khud ki side se bhi constructor bna skte h
                                                            cosntructore overloading can be also possible 
                                                  IMPORTANT : class ke constructor ka this keyword mera class ke address ko store krke rkhta hai jisme me agar mujhe koi cheej jo object se access kr skta tha whi same me (*this).attribute_name // (*obj).name("Rohan") ,  se bhi krskta hoob wrna this->attribute_name // obj->name("ROhan") ,  aise bhi krskta hoon, jo cheej me object se access kr skta hoon whi m , this se bhi access krskta hoon
              Important:
                         Class ka koi alag memory address nahi hota
                         Memory objects ko milti hai
                         Isliye this hamesha object ko refer karta hai, class ko nahi
              Short line me:
                         this = current object ka hidden pointer/reference.
                         |
                  example: this → jis object ka constructor call hua hai us object ka address hota hai.
                           Student s1(20); => this == &s1 iss se samjh ja
                  |
                    i can make default and parameterised constructor(jo paramters le) both together in a class
                  |
                    inline constructor(btana pdta hai inline likhkr/chahe mt likho) : inline student(string a,int b) : name(a),age(b){  }
                  |  
                  copy constructor : pass by reference otherwise passing by value can call the recursive stack overflow
                  |
                   Difference Between Instance Function and Static Function
                       Instance Function(also called member functions)	    Static Function
                                 Belongs to object	                         Belongs to class
                                 Needs object to call	                    Can call with class name
                                   Has this pointer	                       No this pointer
                               Can access non-static members              Cannot directly access non-static members
                   |
                    Static function directly non-static members/functions ko access nahi kar sakta, because static function ke paas                                   this pointer nahi hota.
                              Lekin agar tum object bana do (ya object pass karo), tab static function object ke through non-static function                                    access kar sakta hai.                         
                                                        `
                          #include <iostream>
                           using namespace std;
                           class Test {
                           public:  
                               void display() {
                                   cout << "Non-static function";
                               }
                               static void show() {
                                   Test obj;      // object created
                             |    
                                   obj.display(); // accessing non-static function
                               }
                           };
                           int main() {
                               Test::show();
                           }                              
                      |
                      Destructor : it is a instance member function that is invoked automatically whenever an object is going to be destroyed
                                  |
                                     it is the last function thst is going to be calledbefore the object is destroyed.
                                  |
                                     it does not delete the object but it helps in releasing the dynamically created memory by writing delete                                          keyword in it , for ex: delete balance;
                                  |
                                     both constructor and destructor will be in the public format
                                  |
                                   constructor me jo phle object bnaya hai usko constructor phle call hoga sequentially in the order ,  baaki jo                                     object sbse baad me call hoga uska destructor phle call hoga means reverse order me
                                  |
                                    int age = new int; // wrong way new keyword k saath point type ka variable lena hota hai
                                    int *age = new int; // correct way
                                  |
                       Static Data Member:-
                                   over the creation of the new objects if we want that all those share the same data member, functions, methods
                                   so for that we can make them of static type , rela life scenerios for static data member where it can help is :
                                   to get to know how many total number of customer had opened their account in the bank every time after                                            creation of the object of the customer class we will increase the count of total customers in the custructor                                      also to get to know how much total money bank holds.
                              to acces the static member: can not dirstly access static data memeber with the help of the object of class but for this i have to use the class name and scope resolution operator(::)  ( return_type_of_static_data_member class_name :: static_data_member_name )
             | 
             static data members are the attribute of the class and they belong to the class: which means static data members are created at the               time of class creation else other non-static data members are created at the time of object creation.
             |
             similarly mere static member function bhi hote hai which can have the acces to make changes and use static data members but can not use non-static data member because non statc belong to the object but static(data member/ function) belongs to the class , supposae age hmne static data member ko public ki jagah private m bnaya hai ,then i will not be able to access this static data member even with the help of class name and scope resolution operator that's we have the static member function which will help us to access the private static data member 
and in this case static data member function should be in public            
                              |
                              | Encapsulation :- 
                              Wrapping up the data and information in a single unit while controlling access to them , i.e. data hiding but data hiding does not mean to protect from hacking , no it is not like that , it is to protect from the accidental change of data ,
                              |
                              Features of Encapsulation
                                    Below are the features of encapsulation:
                                       1. We can not access any function from the class directly. We need an
                                           object to access that function that is using the member variables of that class.
                                       2. The function which we are making inside the class must use only
                                            member variables, only then it is called encapsulation.
                                       3. If we don't make a function inside the class which is using the member
                                            variable of the class then we don't call it encapsulation.("Agar hum kisi class ke member variable ka use karne wale function ko usi class ke andar define nahi karte, to use encapsulation nahi kaha jata.")
                                       4. Encapsulation improves readability, maintainability, and security by
                                            grouping data and methods together.
                                       5. It helps to control the modification of our data members.
                                   |
                                   | Abstraction :
                                     Displaying only essential information and hiding the details, ( or principle of least knowledge)
                                   |
                                    Advantages of Data Abstraction
                                       1.) Helps the user to avoid writing the low-level code
                                       2.) Avoids code duplication and increases reusability.
                                       3.) Can change the internal implementation of the class independently
                                            without affecting the user.
                                       4.) Helps to increase the security of an application or program as only
                                             important details are provided to the user.
                                       5.) It reduces the complexity as well as the redundancy of the code,
                                              therefore increasing the readability.
                                  |
                                  |
                                   INHERITANCE & ACCESS MODIFIER
                                   |
                                       The capability of a class to derive property & characteristic from another class.
                                       |
                                       |
                                                   outside the class                within the class                   derived class
                                          public          YES                           YES                                  YES
                                          protected       NO                            YES                                  YES
                                          private         NO                            YES                                   NO
                                       |
                                       |
                                       |
                                       |
                                       BASE CLASS                      DERIVED CLASS
                                    1.) public                          public
                                        protected ------public-------   protected
                                        private                         not accessible
                                       |
                                    2.) public                          protected
                                        protected -------protected----- protected
                                        private                         not accessible
                                       |
                                    3.) public                        private
                                        protected ------private------ private
                                        private                       not accessible
                                     |
                                     |
                                     |
                                     |
              -> to use the base class property in derived class, base class must be having the default constructor, if base class ke constructor                  se data members ko set ke rhe ho toh , kyuki jo variables child class me nhi milte tb wo parent class ke constructor ke through                  ( jo variable hmne child class ke constructor me paas kiye hai ) set hote hai, aur waise bhi child se phle parent birth lete hai,                 toh ya toh parent me wo variables jo parent ke child use kr rha hai sirf unhi ke liye alag se constructor dedicatidely bnao ,ya                   fir default constructor bnao( tb bnao jb koi aur bhi cinstructor bhi bna rhe ho wrna default constructor toh already rhta hi hai                  class me)
              |
              -> inheritance me jb child class ka object bnate hai toh sbse phle parent class ka constructor call hota hai then child class ka                     constructor call hoga using the object created of child class earlier and destructor k liye: jiska phle constructor call hua                      uska destructor baad me call hoga aur jiska constructor baad me call hua uska destructor phle chalega iskp aise bhi samajh skte                  hai k parent child me se phle kiska birth hua hoga toh aise hi parent class phle chalegi then child class
              |
              -> jb bhi method overriding krte hai toh abse phle jiske object ne call kiye usme dekhta hai aur agr usme nhi milta tb parent me ya                  fir jisko bhi inherit kr rha hai usme jaake dekega
              |
              -> multiple inheritance me jis parent ki property phle inherit hogi uska constructor phle call hoga
              |
              ->Multipath inheritance : jb kisi ek class pr multiple path se , same property pahuch jaaye 
                      ---------------> class A <------------------
                      |                                          |
                      |                                          |
                     class B                                  class c                         
                        ^                                       ^
                        |                                       |
                        |                                       |
                        ------------- class D -------------------           jaise isme class D ke paar Class B and C dono se class A ki property aa jayengi toh decide kaise krenge , toh uske liye hmm :public virtual krke inherit krayenge class A ko , class B and class C me, wrna agr ye nhi krta hoon toh ambiguous error aayegi
    |
    |
    |
    |
    |                POLYMORPHISM (Poly : Many . morphism: forms) for ex: suppose koi person hai aur wo male hai toh whi person kisi ke father, 
                           |             kisi ke grandfather,kisi ke Mama, kisi ke uncle, kisi ke brother, kisi ke friend ye sb hoskte hai ,ab                               |             person toh ek hi hai but usi person ke various roles hai toh isi tarah hota hai Polymorphism
                           |
      -------------------- |-------------------------------------------------------
      |                                                                           |
Compile time polumorphism(Static Poly.)                                   Runtime Polymorphism (Dynamic Polymorphism) 
    /                             \                                                            |
   /                               \                                                           |
 function(Method) overloading       Operator overloading                             Virtual function (Method Overriding)    
                                                                                                                                      |
                                                                                                                                      |
                                                                                                                                      |
                                                                                                                                      |
                                                                                                                                      |
 FUNCTION OVERLOADING : When there are multiple functions with the same name but different parameters, then the functions are said to be                                  overloaded hence this is known as Function Overloading.                                                                                           Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.   
 |
 |
 |
 

          
                                          
                 
                        
                                    
                                              
                                       
                                     
                                   
   

   
   
