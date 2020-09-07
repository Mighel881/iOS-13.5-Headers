/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTexture;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CARenderer;

@interface NTKUpNextRenderer : NSObject {

	CARenderer* _renderer;
	IOSurfaceRef _ioSurface;
	id<MTLTexture> _texture;

}
-(void)dealloc;
-(IOSurfaceRef)newSurfaceWithWidth:(double)arg1 height:(double)arg2 ;
-(id)renderView:(id)arg1 ;
@end
