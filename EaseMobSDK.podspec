Pod::Spec.new do |spec|
  spec.name         = 'EaseMobSDK'
  spec.version      = '2.1.9'
  spec.license      = 'MIT'
  spec.summary      = 'An Objective-C client for IM service'
  spec.homepage     = 'https://github.com/easemob/sdk-ios-cocoapods'
  spec.author       = {'EaseMob Inc.' => 'admin@easemob.com'}
  spec.source       =  {:git => 'https://github.com/easemob/sdk-ios-cocoapods.git', :tag => spec.version.to_s }
  spec.source_files = "EaseMobSDK/**/*.{h}"
  spec.platform     = :ios, '6.0'
  spec.requires_arc = true
  spec.frameworks = 'Foundation', 'UIKit', 'MapKit', 'ImageIO', 'CoreLocation', 'Security', 'MobileCoreServices',  'SystemConfiguration', 'AddressBook', 'CFNetwork', 'CoreGraphics'
  spec.libraries    = 'iconv', 'xml2', 'z', 'resolv', 'stdc++', 'sqlite3', 'stdc++.6'
  spec.resource     = 'EaseMobSDK/resources/EaseMob.bundle'
    spec.vendored_libraries = ['EaseMobSDK/lib/libEaseMobClientSDKLite_armv7.a',
                             'EaseMobSDK/lib/libEaseMobClientSDKLite_armv7s.a',
                             'EaseMobSDK/lib/libEaseMobClientSDKLite_arm64.a',
                             'EaseMobSDK/lib/libEaseMobClientSDKLite_i386.a',
                             'EaseMobSDK/lib/libEaseMobClientSDKLite_x86_64.a']
  spec.xcconfig     = {'OTHER_LDFLAGS' => '-ObjC'}
end
