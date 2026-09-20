Pod::Spec.new do |s|
    s.name = 'LGPlusButtonsView'
    s.version = '1.1.2'
    s.platform = :ios, '6.0'
    s.license = 'MIT'
    s.homepage = 'https://github.com/LGLibs/LGPlusButtonsView'
    s.author = { 'Grigorii Lutkov' => 'grigorii@lutkov.dev' }
    s.source = { :git => 'https://github.com/LGLibs/LGPlusButtonsView.git', :tag => s.version }
    s.summary = 'iOS implementation of Floating Action Button (Google Plus Button, fab), that shows more options'
    s.requires_arc = true
    s.source_files = 'LGPlusButtonsView/*.{h,m}'
end
