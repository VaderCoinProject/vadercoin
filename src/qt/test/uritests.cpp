// Copyright (c) 2009-2018 The Vadercoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <qt/test/uritests.h>

#include <qt/guiutil.h>
#include <qt/walletmodel.h>

#include <QUrl>

void URITests::uriTests()
{
    SendCoinsRecipient rv;
    QUrl uri;
    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?req-dontexist="));
    QVERIFY(!GUIUtil::parseVadercoinURI(uri, &rv));

    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?dontexist="));
    QVERIFY(GUIUtil::parseVadercoinURI(uri, &rv));
    QVERIFY(rv.address == QString("N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 0);

    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?label=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseVadercoinURI(uri, &rv));
    QVERIFY(rv.address == QString("N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG"));
    QVERIFY(rv.label == QString("Wikipedia Example Address"));
    QVERIFY(rv.amount == 0);

    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?amount=0.001"));
    QVERIFY(GUIUtil::parseVadercoinURI(uri, &rv));
    QVERIFY(rv.address == QString("N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100000);

    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?amount=1.001"));
    QVERIFY(GUIUtil::parseVadercoinURI(uri, &rv));
    QVERIFY(rv.address == QString("N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100100000);

    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?amount=100&label=Wikipedia Example"));
    QVERIFY(GUIUtil::parseVadercoinURI(uri, &rv));
    QVERIFY(rv.address == QString("N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG"));
    QVERIFY(rv.amount == 10000000000LL);
    QVERIFY(rv.label == QString("Wikipedia Example"));

    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?message=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseVadercoinURI(uri, &rv));
    QVERIFY(rv.address == QString("N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG"));
    QVERIFY(rv.label == QString());

    QVERIFY(GUIUtil::parseVadercoinURI("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?message=Wikipedia Example Address", &rv));
    QVERIFY(rv.address == QString("N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG"));
    QVERIFY(rv.label == QString());

    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?req-message=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseVadercoinURI(uri, &rv));

    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?amount=1,000&label=Wikipedia Example"));
    QVERIFY(!GUIUtil::parseVadercoinURI(uri, &rv));

    uri.setUrl(QString("vadercoin:N8YSXKveXdUQJSup2zvB1SkKrE2JfznpXG?amount=1,000.0&label=Wikipedia Example"));
    QVERIFY(!GUIUtil::parseVadercoinURI(uri, &rv));
}
