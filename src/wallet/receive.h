// Copyright (c) 2021 The Vadercoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VADERCOIN_WALLET_RECEIVE_H
#define VADERCOIN_WALLET_RECEIVE_H

#include <amount.h>
#include <wallet/ismine.h>
#include <wallet/transaction.h>
#include <wallet/wallet.h>

struct COutputEntry
{
    CTxDestination destination;
    std::string nameOp;
    CAmount amount;
    int vout;
};

#endif // VADERCOIN_WALLET_RECEIVE_H
