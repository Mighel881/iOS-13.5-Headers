/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITableViewDropItem.h>

@class UIDragItem, NSIndexPath, NSString;

@interface _UITableViewDropItemImpl : NSObject <_UITableViewDropItem> {

	UIDragItem* _dragItem;
	NSIndexPath* _sourceIndexPath;
	NSIndexPath* _translatedSourceIndexPath;

}

@property (nonatomic,retain) UIDragItem * dragItem;                                                                                                        //@synthesize dragItem=_dragItem - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceIndexPath;                                                                                                //@synthesize sourceIndexPath=_sourceIndexPath - In the implementation block
@property (setter=_setTranslatedSourceIndexPath:,getter=_translatedSourceIndexPath,nonatomic,retain) NSIndexPath * translatedSourceIndexPath;              //@synthesize translatedSourceIndexPath=_translatedSourceIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize previewSize; 
-(UIDragItem *)dragItem;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(NSIndexPath *)sourceIndexPath;
-(CGSize)previewSize;
-(void)setSourceIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithDragItem:(id)arg1 sourceIndexPath:(id)arg2 ;
-(void)_translateSourceIndexPath:(/*^block*/id)arg1 ;
-(id)_translatedSourceIndexPath;
-(void)_setTranslatedSourceIndexPath:(id)arg1 ;
@end

