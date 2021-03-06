/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MTLCompileOptions : NSObject <NSCopying>

@property (assign,nonatomic) BOOL tracingEnabled; 
@property (assign,nonatomic) BOOL glBufferBindPoints; 
@property (assign,nonatomic) BOOL debuggingEnabled; 
@property (assign,nonatomic) BOOL compileTimeStatisticsEnabled; 
@property (assign,nonatomic) NSString * additionalCompilerArguments; 
@property (assign,nonatomic) unsigned char sourceLanguage; 
@property (nonatomic,copy) NSDictionary * preprocessorMacros; 
@property (assign,nonatomic) BOOL fastMathEnabled; 
@property (assign,nonatomic) unsigned long long languageVersion; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

