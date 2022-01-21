//
//  OpenSuitPayStoreTransaction.h
//  OpenSuitPayStore
//
//  Created by Hermes on 10/16/13.
//  Copyright (c) 2013 Robot Media. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

@interface OpenSuitPayStoreTransaction : NSObject<NSSecureCoding>

@property(nonatomic, assign) BOOL consumed;
@property(nonatomic, assign) BOOL recharged;
@property(nonatomic, copy) NSString *productIdentifier;
@property(nonatomic, copy) NSDate *transactionDate;
@property(nonatomic, copy) NSString *transactionIdentifier;
@property(nonatomic, copy) NSString *orderId;


- (instancetype)initWithPaymentTransaction:(SKPaymentTransaction*)paymentTransaction;

@end
