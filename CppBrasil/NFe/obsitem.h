/*
Copyright 2022 João Elson
jetmorju@gmail.com

Web-site: https://cppbrasil.com.br

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/


#ifndef OBSITEM_H
#define OBSITEM_H

#include <memory>
#include <QString>
#include <CppBrasil/cppbrasil_global.h>
#include <CppBrasil/NFe/obscont.h>
#include <CppBrasil/NFe/obsfisco.h>

class CPPNFE_EXPORT ObsItem
{
public:
    ObsItem();
    ~ObsItem();
    void clear();

    std::shared_ptr<ObsCont> obsCont;
    std::shared_ptr<ObsFisco> obsFisco;

};

#endif // OBSITEM_H
