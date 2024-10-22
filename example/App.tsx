/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 */

import React from 'react'
import type { PropsWithChildren } from 'react'
import {
  Button,
  SafeAreaView,
  ScrollView,
  StatusBar,
  StyleSheet,
  Text,
  useColorScheme,
  View,
} from 'react-native'

import { Colors, Header } from 'react-native/Libraries/NewAppScreen'

import {
  InAppBrowser,
  SFSafariViewController,
  ModalPresentationStyle,
  ChromeCustomTabs,
} from 'react-native-in-app-browser'

type SectionProps = PropsWithChildren<{
  title: string
}>

function Section({ children, title }: SectionProps): React.JSX.Element {
  const isDarkMode = useColorScheme() === 'dark'
  return (
    <View style={styles.sectionContainer}>
      <Text
        style={[
          styles.sectionTitle,
          {
            color: isDarkMode ? Colors.white : Colors.black,
          },
        ]}
      >
        {title}
      </Text>
      <Text
        style={[
          styles.sectionDescription,
          {
            color: isDarkMode ? Colors.light : Colors.dark,
          },
        ]}
      >
        {children}
      </Text>
    </View>
  )
}

const URL = 'https://reactnative.dev'

function App(): React.JSX.Element {
  const isDarkMode = useColorScheme() === 'dark'

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
  }

  return (
    <SafeAreaView style={backgroundStyle}>
      <StatusBar
        barStyle={isDarkMode ? 'light-content' : 'dark-content'}
        backgroundColor={backgroundStyle.backgroundColor}
      />
      <ScrollView
        contentInsetAdjustmentBehavior="automatic"
        style={backgroundStyle}
      >
        <Header />
        <View
          style={{
            backgroundColor: isDarkMode ? Colors.black : Colors.white,
          }}
        >
          <Section title="🌐 InAppBrowser">
            <Button
              title={`open(${URL})`}
              onPress={() => {
                InAppBrowser.open(URL)
              }}
            />
          </Section>
          <Section title="🍎 SFSafariViewController">
            <Button
              title={`present(${URL})`}
              onPress={() => {
                SFSafariViewController.present({
                  url: URL,
                  modalPresentationStyle: ModalPresentationStyle.PageSheet,
                })
              }}
            />
            <Button
              title="present() & dismiss() after 5s"
              onPress={() => {
                SFSafariViewController.present({
                  url: URL,
                })
                setTimeout(() => {
                  SFSafariViewController.dismiss()
                }, 5000)
              }}
            />
          </Section>
          <Section title="🤖 ChromeCustomTabs">
            <Button
              title={`launch(${URL})`}
              onPress={() => {
                ChromeCustomTabs.launch({ url: URL })
              }}
            />
          </Section>
        </View>
      </ScrollView>
    </SafeAreaView>
  )
}

const styles = StyleSheet.create({
  sectionContainer: {
    marginTop: 32,
    paddingHorizontal: 24,
  },
  sectionTitle: {
    fontSize: 24,
    fontWeight: '600',
  },
  sectionDescription: {
    marginTop: 8,
    fontSize: 18,
    fontWeight: '400',
  },
  highlight: {
    fontWeight: '700',
  },
})

export default App
