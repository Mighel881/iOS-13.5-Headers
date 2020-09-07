/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIItem;

@interface SKUIGiftTemplateViewElement : SKUIViewElement {

	long long _giftType;
	NSString* _productBuyParams;
	long long _productItemIdentifier;

}

@property (nonatomic,readonly) long long giftType;                  //@synthesize giftType=_giftType - In the implementation block
@property (nonatomic,readonly) SKUIItem * productItem; 
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)giftType;
-(SKUIItem *)productItem;
@end
