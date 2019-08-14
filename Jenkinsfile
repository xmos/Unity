@Library('xmos_jenkins_shared_library@develop') _

getApproval()

pipeline {
  agent {
    label 'brew'
  }
  options {
    skipDefaultCheckout()
  }
  stages {
    stage('Checkout') {
      steps {
        script {
          def current_scm = checkout scm
          env.SAVED_GIT_URL = current_scm.GIT_URL
          env.SAVED_GIT_COMMIT = current_scm.GIT_COMMIT
        }
      }
    }
  }
  post {
    success {
      updateViewfiles()
    }
    cleanup {
      cleanWs()
    }
  }
}
