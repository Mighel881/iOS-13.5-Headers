/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUICollectionDOMFeature;

@interface SKUIGridViewElement : SKUIViewElement {

	id _persistenceKey;
	BOOL _showsEditMode;

}

@property (nonatomic,readonly) BOOL allowsMultipleSelectionDuringEditing; 
@property (nonatomic,readonly) BOOL showsEditMode;                                        //@synthesize showsEditMode=_showsEditMode - In the implementation block
@property (nonatomic,readonly) SKUICollectionDOMFeature * collectionFeature; 
+(id)supportedFeatures;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(long long)pageComponentType;
-(id)persistenceKey;
-(BOOL)showsEditMode;
-(SKUICollectionDOMFeature *)collectionFeature;
-(long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2 ;
@end
