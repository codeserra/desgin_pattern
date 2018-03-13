// in this implementaion, first creation is 'delegated' to the compiler, using 'static' keyword with in function
// This way provides well-known creatoin point for static variable
// Note, the 'GetInstance' access unction's return value is refernce rather than pointer
// Working with refernce is better: now user cannot delete the singleton's pointer


clas CKeyboard
{
    public:
        static cKeyboard
        {
            static CKeyboard keyboard;
            return keyboard;
        }
    
    private:
        CKeyboard () {}
        CKeryboard (const CKeyboard&);
        CKeryboard& operator = (const CKeyboard):
};
