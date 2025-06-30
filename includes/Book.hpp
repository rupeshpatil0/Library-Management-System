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

       void isValid(int value);
       void isValid(std::string value);

    public:
        Book()=default;
        Book(std::string title,int quantity);
        Book(int barcode,std::string title,int edition,std::string author,std::string category,std::string publisher,std::string language,int quantity);
        
        void setBarcodeNo(int barcodeNo);
        void setQuantity(int quantity);
        void setEdition(int edition);
        void setTitle(std::string title);
        void setAuthor(std::string author);
        void setCategory(std::string category);
        void setPublisher(std::string publisher);
        void setLanguage(std::string Language);

        int getBarcodeNo();
        int getQuantity();
        int getEdition();
        
        std::string getTitle();
        std::string getAuthor();
        std::string getCategory();
        std::string getPublisher();
        std::string getLanguage();
       

};


#endif