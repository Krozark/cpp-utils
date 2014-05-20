#include <utils/json/Array.hpp>

namespace utils
{
    namespace json
    {
        Array::Array()
        {
        }

        std::ostream& operator<<(std::ostream& stream, const Array& self)
        {
            self.print_ident(stream,0);
            return stream;
        }

        void Array::print_ident(std::ostream& stream, int i)const
        {
            stream<<"[";
            if(values.size()>0)
            {
                auto begin = values.begin();
                auto end = values.end();
                begin->print_ident(stream,i);
                ++begin;
                while(begin!=end)
                {
                    stream<<",";
                    begin->print_ident(stream,i);
                    ++begin;
                }
            }
            stream<<"]";
        }
    }
}
