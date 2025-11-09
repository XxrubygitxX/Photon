

#ifndef THREADS_H
#define THREADS_H






#include <vector>
#include <thread>




namespace Photon
{

    //////////////////////////////////////////////////////
    // The 'threads' class keeps track of all threads
    //////////////////////////////////////////////////////

    class EThreads
    {

    

        public:

            EThreads();


            
            
            virtual ~EThreads();

        private:

            std::vector<> mThreads;

    };

}



#endif
