#include <string>

struct SDummyRight
{
  int         dummyIntRight;
  char*       dummyCharRight;
  std::string dummyStrRight;
};

struct dummyWrong
{
  int DummyIntWrong;
  char* DummyCharWrong;
  std::string DummyStrWrong;
};

class CDummyRight
{
  public:
    DoRight() {}
  protected:
    InnerDoRight() {}
  private:
    int m_dummyMemberRight;
};

class CDummyWrong
{
  protected:
    innerDoWrong() {}
  public:
    doWrong() {}
  private:
    int dummyMemberWrong;
    int DummyMemberWrong;
};

int main()
{
  int intWright = 0;
  use(intWright);
  int IntWrong = 1;
  use(IntWrong);
}
