/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@protocol QLItemThumbnailGeneratorProtocol;
@class UIImage, QLItem;

@interface QLItemThumbnailGenerationOperation : QLAsynchronousOperation {

	UIImage* _thumbnail;
	id<QLItemThumbnailGeneratorProtocol> _generator;
	QLItem* _item;
	double _scale;
	CGSize _size;

}

@property (nonatomic,retain) id<QLItemThumbnailGeneratorProtocol> generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) QLItem * item;                                               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) CGSize size;                                                 //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                                //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                                         //@synthesize thumbnail=_thumbnail - In the implementation block
-(CGSize)size;
-(QLItem *)item;
-(void)setItem:(QLItem *)arg1 ;
-(void)main;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(id<QLItemThumbnailGeneratorProtocol>)generator;
-(void)setGenerator:(id<QLItemThumbnailGeneratorProtocol>)arg1 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(id)initWithThumbnailGenerator:(id)arg1 item:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 ;
@end

