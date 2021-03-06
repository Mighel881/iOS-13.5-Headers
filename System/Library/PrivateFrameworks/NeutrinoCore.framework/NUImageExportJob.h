/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUExportJob.h>

@class NSData;

@interface NUImageExportJob : NUExportJob {

	NSData* _destinationData;

}
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(void)cleanUp;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)initWithExportRequest:(id)arg1 ;
-(id)initWithImageExportRequest:(id)arg1 ;
-(id)imageExportRequest;
-(id)_filterProperties:(id)arg1 ;
-(id)imageDestinationOptions;
@end

