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
|
                        now the next part is the constructor : it's a function that is automatically invoked at the time of object creation 
                                                               same name as the class name
                                                               No return type
                                                               used for initialization of values
                                                               jo resources mujhe chahiye unko constructor ke through phle hi maang loon
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
                           

                                                         
                                                        
                                                        

                                                        

   

   
   
