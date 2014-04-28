// Copyright (c) 2011-2014 The Nautiluscoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DIGIBYTEADDRESSVALIDATOR_H
#define DIGIBYTEADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class NautiluscoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NautiluscoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Nautiluscoin address widget validator, checks for a valid nautiluscoin address.
 */
class NautiluscoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NautiluscoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // DIGIBYTEADDRESSVALIDATOR_H
