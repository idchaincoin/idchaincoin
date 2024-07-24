// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2023 The IDChainCoin Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DCT_CORE_NEW_GUI_PRUNNABLE_H
#define DCT_CORE_NEW_GUI_PRUNNABLE_H

class Runnable {
public:
    virtual void run(int type) = 0;
    virtual void onError(QString error, int type) = 0;
};

#endif //DCT_CORE_NEW_GUI_PRUNNABLE_H
