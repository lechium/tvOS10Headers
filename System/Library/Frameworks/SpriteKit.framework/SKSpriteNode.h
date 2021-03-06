/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>
#import <libobjc.A.dylib/SKWarpable.h>

@class SKWarpGeometry, SKLightNode, SKTexture, UIColor, SKShader, NSDictionary, NSString;

@interface SKSpriteNode : SKNode <SKWarpable> {

	SKCSpriteNode* _skcSpriteNode;
	SKLightNode* _light;
	BOOL _shouldRepeatTexture;

}

@property (assign,nonatomic) BOOL shouldRepeatTexture;                   //@synthesize shouldRepeatTexture=_shouldRepeatTexture - In the implementation block
@property (assign,nonatomic) CGSize repeatTextureSize; 
@property (nonatomic,retain) SKTexture * texture; 
@property (nonatomic,retain) SKTexture * normalTexture; 
@property (assign,nonatomic) unsigned lightingBitMask; 
@property (assign,nonatomic) unsigned shadowCastBitMask; 
@property (assign,nonatomic) unsigned shadowedBitMask; 
@property (assign,nonatomic) CGRect centerRect; 
@property (assign,nonatomic) double colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,retain) SKShader * shader; 
@property (nonatomic,copy) NSDictionary * attributeValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKWarpGeometry * warpGeometry; 
@property (assign,nonatomic) long long subdivisionLevels; 
+(id)spriteNodeWithTexture:(id)arg1 ;
+(id)spriteNodeWithImageNamed:(id)arg1 ;
+(id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(BOOL)arg2 ;
+(id)spriteNodeWithTexture:(id)arg1 size:(CGSize)arg2 ;
+(id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2 ;
+(id)spriteNodeWithColor:(id)arg1 size:(CGSize)arg2 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(SKShader *)shader;
-(void)setShader:(SKShader *)arg1 ;
-(id)initWithTexture:(id)arg1 ;
-(SKTexture *)texture;
-(void)setTexture:(SKTexture *)arg1 ;
-(void)setNormalTexture:(SKTexture *)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setColorBlendFactor:(double)arg1 ;
-(void)setWarpGeometry:(SKWarpGeometry *)arg1 ;
-(SKWarpGeometry *)warpGeometry;
-(id)initWithImageNamed:(id)arg1 ;
-(void)setLightingBitMask:(unsigned)arg1 ;
-(double)colorBlendFactor;
-(unsigned)lightingBitMask;
-(void)setShadowCastBitMask:(unsigned)arg1 ;
-(void)setShadowedBitMask:(unsigned)arg1 ;
-(id)initWithTexture:(id)arg1 color:(id)arg2 size:(CGSize)arg3 ;
-(void)setCenterRect:(CGRect)arg1 ;
-(void)setSubdivisionLevels:(long long)arg1 ;
-(SKTexture *)normalTexture;
-(unsigned)shadowCastBitMask;
-(unsigned)shadowedBitMask;
-(CGRect)centerRect;
-(long long)subdivisionLevels;
-(id)initWithColor:(id)arg1 size:(CGSize)arg2 ;
-(void)scaleToSize:(CGSize)arg1 ;
-(BOOL)repeatTexture;
-(void)setRepeatTexture:(BOOL)arg1 ;
-(CGSize)repeatTextureSize;
-(void)setRepeatTextureSize:(CGSize)arg1 ;
-(BOOL)_pathFromTextureToPoints:(1*)arg1 outSize:(unsigned long long*)arg2 accuracy:(float)arg3 ;
-(BOOL)shouldRepeatTexture;
-(void)setShouldRepeatTexture:(BOOL)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
@end

