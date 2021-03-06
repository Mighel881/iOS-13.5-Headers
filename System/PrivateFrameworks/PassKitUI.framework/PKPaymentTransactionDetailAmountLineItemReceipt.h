/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentTransactionDetailAmountLineItem.h>

@class PKTransactionReceiptLineItem, UIImage, NSString;

@interface PKPaymentTransactionDetailAmountLineItemReceipt : NSObject <PKPaymentTransactionDetailAmountLineItem> {

	PKTransactionReceiptLineItem* _lineItem;
	BOOL _hasTrailingLineSeperator;

}

@property (assign,nonatomic) BOOL hasTrailingLineSeperator;                  //@synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSString * secondaryLabel; 
@property (nonatomic,readonly) NSString * tertiaryLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long lineItemType; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) BOOL isEmphasized; 
-(NSString *)value;
-(UIImage *)image;
-(NSString *)label;
-(BOOL)isEmphasized;
-(NSString *)secondaryLabel;
-(NSString *)tertiaryLabel;
-(BOOL)hasTrailingLineSeperator;
-(void)setHasTrailingLineSeperator:(BOOL)arg1 ;
-(unsigned long long)lineItemType;
-(id)initWithReceiptLineItem:(id)arg1 ;
@end

