// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BTCr_QT_BTCrADDRESSVALIDATOR_H
#define BTCr_QT_BTCrADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BTCrAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BTCrAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** BTCr address widget validator, checks for a valid btcr address.
 */
class BTCrAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BTCrAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BTCr_QT_BTCrADDRESSVALIDATOR_H
