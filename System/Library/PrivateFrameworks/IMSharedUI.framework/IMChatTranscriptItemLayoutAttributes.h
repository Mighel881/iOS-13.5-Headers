/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath;

@interface IMChatTranscriptItemLayoutAttributes : NSObject <NSCopying> {

	NSIndexPath* _indexPath;
	CGSize _size;
	CGRect _frame;

}

@property (nonatomic,copy) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) CGRect frame;                       //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(NSIndexPath *)indexPath;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
@end
