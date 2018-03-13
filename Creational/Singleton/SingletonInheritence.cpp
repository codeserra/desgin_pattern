// sometimes one needs to inherit from singleton class
// this is not trivial because static function cannot be overridden
// one can add 'GetInstance2' function in order to create inherited object, 
//  but this solution is very bad, because user can call wrong function
// better solution is achieved using c++ templates: the required type is passed as template parameter
// Note: this is not a way to create universal singleton, rather this way allows to create a singleton class inside some infrastucture
// and to extend it appropriately to user's need
// below singleton is based on Meryers Singleton

template class<T>
class CKeyboard
{
    public:
    static T& GetInstance()
    {
        m_bSingletonCreating = true;
        static T keyboard;
        m_bSingletonCreating = false;
        retunr keyboard;
    }
    protected:
        CKeyboard(){}
        CKeyboard(const CKeyboard&);
        CKeyboard& operator = (const CKeyboard&);
        static bool m_bSingletonCreating ;
}

//Static variable initializatoin
template <class T>
bool CKeyboard<T>:: m_bSingletonCreating = false;

class CUSBKeyboard: public CKeyboard <CUSBKeyboard>
{
   public:
    CUSBKeyboard()
    {
          if(!m_bSingletonCreating)
               throw "Singleton must not be initialized!!";
               
           // ....
      }
};
    }
}
