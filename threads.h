

#ifndef THREADS_H
#define THREADS_H






#include <vector>
#include <thread>




namespace Photon
{

    typedef enum threadprivilege_t
    {

        MAINGRAPHICSTHREAD,     /* The main OpenGL Graphics thread */
        GRAPHICSSUBTHREAD,      /* Sub-thread that submits graphics requests through the queue */
        OBJECTIVETHREAD,        /* Thread where a game object's code is run on */
        SUBJECTIVETHREAD        /* Manually invoked thread */

    } threadprivilege_t;

    class EThreads
    {

        typedef struct CThread
        {

            std::thread mThread;
            threadprivilege_t mPrivilege;

        } CThread;

        public:

            EThreads();
            
            virtual ~EThreads();

        private:

            std::vector<std::thread> mThreads;

    };

}



#endif
