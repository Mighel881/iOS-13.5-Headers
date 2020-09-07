/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:55:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSArray;

@interface ENSignatureFile : NSObject {

	_sFILE* _fileHandle;
	NSArray* _signatures;

}

@property (nonatomic,copy) NSArray * signatures;              //@synthesize signatures=_signatures - In the implementation block
+(id)signatureFileWithBytes:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(NSArray *)signatures;
-(BOOL)writeAndReturnError:(id*)arg1 ;
-(void)setSignatures:(NSArray *)arg1 ;
-(BOOL)openWithFileSystemRepresentation:(const char*)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
@end
