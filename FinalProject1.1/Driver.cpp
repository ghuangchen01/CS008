//
// Created by Guanhao Huang Chen on 4/25/23.
//

#include "Driver.h"
#include "components/profile/DropDownMenu/DropDownMenu.h"
#include "Source/backgroundColor/backgroundColor.h"
#include "components/LoginPage/typing/typingInLogin.h"
#include "components/LoginPage/LoginPage.h"
#include "Source/UserAccountStorage/Account.h"
#include "window/Application.h"
#include "components/profile/profileIcon.h"
#include "components/PageControl.h"
void Driver::run() {
//    if(Account::checkAccount("guanhao","0101")){
//        std::cout<<"find\n";
//    }else{
//        std::cout<<"not find\n";
//    }
    Application app({2040,1080,30},"Motto Order",backgroundColor::getColor());
//    testGui test;
//    app.addDrawable(test);
//    profileIcon icon(app.getWindow());
//    DropDownMenu drop({1800,100});
//    typingInLogin type({780,380},"Username");
//    drop.addBox("hello");
//    drop.addBox("world");
//    app.addDrawable(icon);
//    app.addDrawable(drop);
//    LoginPage loginPage;
    PageControl pageControl;
    app.addDrawable(pageControl);
    app.run();
}
