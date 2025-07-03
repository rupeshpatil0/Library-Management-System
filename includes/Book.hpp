#ifndef BOOK_H
#define BOOK_H
#include <string>


class Book{
    private:
       int barcodeNo;
       int quantity;
       int edition;
       std::string title;
       std::string author;
       std::string category;
       std::string publisher;
       std::string language;

       void isValid(int value)const;
       void isValid(const std::string& value)const;

    public:
        Book()=default;
        Book(const std::string& title,int quantity);
        Book(int barcode,const std::string& title,int edition,const std::string& author,const std::string& category,const std::string& publisher,const std::string& language,int quantity);
        //copy constructur and move constructor
        void setBarcodeNo(int barcodeNo);
        void setQuantity(int quantity);
        void setEdition(int edition);
        void setTitle(const std::string &title);
        void setAuthor(const std::string &author);
        void setCategory(const std::string &category);
        void setPublisher(const std::string &publisher);
        void setLanguage(const std::string &Language);

        int getBarcodeNo()const;
        int getQuantity()const;
        int getEdition()const ;
        
        std::string getTitle()const;
        std::string getAuthor()const;
        std::string getCategory()const;
        std::string getPublisher()const;
        std::string getLanguage()const;
       

};


#endif