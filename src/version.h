// Copyright (c) 2012-2020 The Vadercoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VADERCOIN_VERSION_H
#define VADERCOIN_VERSION_H

/**
 * network protocol versioning
 */

static const int PROTOCOL_VERSION = 100;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 90;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION = 100;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 90;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 90;

//! Version when we switched to a size-based "headers" limit.
static const int SIZE_HEADERS_LIMIT_VERSION = 90;

//! "sendheaders" command and announcing blocks with headers starts with this version
static const int SENDHEADERS_VERSION = 90;

//! "feefilter" tells peers to filter invs to you by fee starts with this version
static const int FEEFILTER_VERSION = 90;

//! short-id-based block download starts with this version
static const int SHORT_IDS_BLOCKS_VERSION = 90;

//! not banning for invalid compact blocks starts with this version
static const int INVALID_CB_NO_BAN_VERSION = 90;

//! "wtxidrelay" command for wtxid-based relay starts with this version
static const int WTXID_RELAY_VERSION = 90;

// Make sure that none of the values above collide with
// `SERIALIZE_TRANSACTION_NO_WITNESS` or `ADDRV2_FORMAT`.

#endif // VADERCOIN_VERSION_H
