#ifndef STATUSSERVICO_H
#define STATUSSERVICO_H

#include <memory>
#include <QObject>
#include <CppBrasil/cppbrasil_global.h>
#include <CppBrasil/NFe/convnf.h>
#include <CppBrasil/NFe/confignfe.h>
#include <CppBrasil/NFe/wsnfe.h>
#include <CppBrasil/NFe/retconsstatserv.h>


class CPPNFE_EXPORT StatusServico : public QObject
{
    Q_OBJECT
public:
    StatusServico(ConfigNFe* confgNFe);
    ~StatusServico();
    void clear();
    bool status();
    QString get_error() const;

    std::shared_ptr<RetConsStatServ> retorno;

signals:
    void errorOccurred(const QString &error);
    void wsChange(const WebServicesNF &webServicesNF);

private:
    ConfigNFe* config; //ponteiro de fora
    QString m_error;
};

#endif // STATUSSERVICO_H
