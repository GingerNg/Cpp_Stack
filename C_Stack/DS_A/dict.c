typedef int KeyType;
typedef int DataType;
typedef struct {
    KeyType key;
    DataType value;
} DicElement;

typedef struct {
    int MAXNUM;
    int n;
    DicElement *element;
} SeqDictionary;

int seqSearch(SeqDictionary *dic, KeyType key, int *position) {
    int i;
    for (i = 0; i < dic->n; i++) {
        if (dic->element[i].key == key) {
            *position = i;
            return 1;
        }
    }
    *position = dic->n;
    return 0;
}

int main(){
    
}