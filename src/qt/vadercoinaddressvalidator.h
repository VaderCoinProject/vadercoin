// Copyright (c) 2011-2020 The Vadercoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VADERCOIN_QT_VADERCOINADDRESSVALIDATOR_H
#define VADERCOIN_QT_VADERCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class VadercoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VadercoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Vadercoin address widget validator, checks for a valid vadercoin address.
 */
class VadercoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VadercoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // VADERCOIN_QT_VADERCOINADDRESSVALIDATOR_H
