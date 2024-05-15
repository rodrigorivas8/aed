template <class type>
class stack{
    int max;
    type *list=new type[max];
    type *tip=list-1;
public:

    stack(int m):max(m){}

    bool push(type data){
        if(tip==list+max-1) return false;
        tip++;
        *tip=data;
        return true;
    }

    type pop(){
        if(tip==list-1) return nullptr;
        tip--;
        return *(tip+1);
    }

    type top(){
        if(tip==list-1) return nullptr;
        return *tip;
    }

    bool empty(){
        return tip==list-1;
    }

    bool full(){
        return tip==list+max-1;
    }

};