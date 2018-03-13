// http://www.devartplus.com/3-simple-ways-to-create-singleton-in-c/
// 1. static function "GetInstance" provides the access point.
// 2. Constructor, copy constructor and operator = are hidden from the user
// 3. the singleton is allocated upon first demand (lazy initialzation)
// 4. NULL pointer is used to control first access, hence must be initialized in C++ way -- out of class (as static member)

class CKeyboard
{   
   public:
         static CKeyBoard* GetInstance()
         {
            if (!m_pInstance)                    // Check if NULL
                m_pInstance = new CKeyboard();   // if NULL create object
            return m_pInstance;    
         }
   private:
       CKeyboard() {}
       CKeyboard(const CKeyboard&);
       CKeyboard& operator = (const CKeyboard &);
       
       static CKeyboard* m_pInstance;           // 
       
}

CKeyboard* CKeyboard::m_pInstance = NULL;      // initialize to NULL
