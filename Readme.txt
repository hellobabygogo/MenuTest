1. ����һ��������Ŀ��������Ҫ����Dev-c++������һ�����̲���linktable.h linktable.c menu.h menu.c test.c��ӵ������С� ������ʱ��ѡ��console Application ��ѡC���̡�

2. ��Ϊ������Ĭ����main.c��������Ҫ�ѳ�test.c�д��뿽����main.c��

3. ��Ϊ����Ŀ��linktable.h��ʹ�õ�pthread.h��ͷ�ļ���������windows����Ҫȥ����Windows�汾��pthread

   1. ��Windows�汾��pthread
      Ŀǰ���°汾�ǣ�pthreads-w32-2-9-1-release.zip��
      ��ҳ��ַ��http://sourceware.org/pthreads-win32/
      ftp��ַ��ftp://sourceware.org/pub/pthreads-win32/

   2. ��ѹpthread��ָ��Ŀ¼����ѡ���Ŀ¼�ǣ�D:\DEV-CPP\Pthread

      ��ѹpthreads-w32-2-9-1-release.zip��
      ��ɺ󣬸�Ŀ¼���������ļ��У���Pre-built.2��pthreads.2��QueueUserAPCEx��

   3. ����Dev-C++����ѡ��
      �����İ��Dev-C++Ϊ����

      1)��������ߡ���������ѡ�����Ŀ¼������c++�����ļ�����������ղŽ�ѹ��pthreadĿ¼��ѡ��D:\Program Files\DEV-CPP\Pthread\Pre-built.2\include����ӡ�

      2)��������ߡ���������ѡ�����Ŀ¼�������⡱��������ղŽ�ѹ��pthreadĿ¼��ѡ��D:\Program Files\DEV-CPP\Pthread\Pre-built.2\lib����ӡ� 

   4������Dev-C++��ǰ��������
      ��ʾ���������DevCpp���½�һ���ļ���������-�������ԡ��ǲ����õģ����ԣ�Ӧ�����½�һ�����̣�Ȼ�����ڸù�������Ӷ��̵߳��ļ���
     ��������̡������������ԡ����������������������߶��󡱣�
     ѡ��D:\Program Files\DEV-CPP\Pthread\Pre-built.2\lib\libpthreadGC2.a��ȷ����
   
   5. ���ܱ���pthreadGC2.DLL�����ڡ���Ҫ�ѽ�ѹ�еĸ��ļ�������system32Ŀ¼�¡�
   
   6.  ���������˿������ң�

4. main.cִ�в���
   ����Ҫ��ѯ��cmd -> ������
   ����һ��cmd -> ����cmd �� desc��ps:yes  this is a yes cmd��->����������
   ɾ��һ��cmd ->����Ҫɾ����cmd- >���ɾ�����


������ubantu��gcc���� linktable.c menu.c test.c -o  test
                 ���� ./test
    
   