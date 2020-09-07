/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, UIUpdateItem, NSArray;

@interface UITableViewUpdateGap : NSObject {

	NSMutableArray* _deleteItems;
	NSMutableArray* _insertItems;
	SCD_Struct_UI30 _gapFlags;
	UIUpdateItem* _firstUpdateItem;
	UIUpdateItem* _lastUpdateItem;

}

@property (nonatomic,retain) UIUpdateItem * firstUpdateItem;                 //@synthesize firstUpdateItem=_firstUpdateItem - In the implementation block
@property (nonatomic,retain) UIUpdateItem * lastUpdateItem;                  //@synthesize lastUpdateItem=_lastUpdateItem - In the implementation block
@property (nonatomic,readonly) NSArray * updateItems; 
@property (nonatomic,readonly) NSArray * deleteItems;                        //@synthesize deleteItems=_deleteItems - In the implementation block
@property (nonatomic,readonly) NSArray * insertItems;                        //@synthesize insertItems=_insertItems - In the implementation block
@property (nonatomic,readonly) BOOL isDeleteBasedGap; 
@property (nonatomic,readonly) BOOL hasInserts; 
@property (nonatomic,readonly) BOOL isSectionBasedGap; 
@property (nonatomic,readonly) BOOL hasAutomaticAnimationItems; 
+(id)gapWithUpdateItem:(id)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)updateItems;
-(void)setFirstUpdateItem:(UIUpdateItem *)arg1 ;
-(void)setLastUpdateItem:(UIUpdateItem *)arg1 ;
-(void)addUpdateItem:(id)arg1 ;
-(BOOL)isDeleteBasedGap;
-(BOOL)hasInserts;
-(BOOL)isSectionBasedGap;
-(BOOL)hasAutomaticAnimationItems;
-(NSArray *)deleteItems;
-(NSArray *)insertItems;
-(UIUpdateItem *)firstUpdateItem;
-(UIUpdateItem *)lastUpdateItem;
@end
